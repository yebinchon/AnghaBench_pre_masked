
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {char* iobuf; int recv_bulk_pipe; int send_bulk_pipe; scalar_t__ extra; } ;
struct karma_data {unsigned char* recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct us_data*,int ,unsigned char*,int ,int *) ;
 int FUNC_6 (struct us_data*,char*,char) ;

__attribute__((used)) static int FUNC_7(char VAR_7, struct us_data *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 static unsigned char VAR_11 = 1;
 struct karma_data *VAR_12 = (struct karma_data *) VAR_8->extra;

 FUNC_6(VAR_8, "sending command %04x\n", VAR_7);
 FUNC_1(VAR_8->iobuf, 0, VAR_3);
 FUNC_0(VAR_8->iobuf, VAR_0, VAR_1);
 VAR_8->iobuf[5] = VAR_7;
 VAR_8->iobuf[6] = VAR_11;

 VAR_10 = VAR_6 + FUNC_2(6000);
 for (;;) {
  VAR_9 = FUNC_5(VAR_8, VAR_8->send_bulk_pipe,
   VAR_8->iobuf, VAR_3, ((void*)0));
  if (VAR_9 != VAR_5)
   goto err;

  VAR_9 = FUNC_5(VAR_8, VAR_8->recv_bulk_pipe,
   VAR_12->recv, VAR_2, ((void*)0));
  if (VAR_9 != VAR_5)
   goto err;

  if (VAR_12->recv[5] == VAR_11)
   break;

  if (FUNC_4(VAR_6, VAR_10))
   goto err;

  VAR_8->iobuf[4] = 0x80;
  VAR_8->iobuf[5] = 0;
  FUNC_3(50);
 }

 VAR_11++;
 if (VAR_11 == 0)
  VAR_11 = 1;

 FUNC_6(VAR_8, "sent command %04x\n", VAR_7);
 return 0;
err:
 FUNC_6(VAR_8, "command %04x failed\n", VAR_7);
 return VAR_4;
}
