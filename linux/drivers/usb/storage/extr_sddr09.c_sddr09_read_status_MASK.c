
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; int recv_bulk_pipe; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (struct us_data*,int ,unsigned char*,int,int *) ;
 int FUNC_3 (struct us_data*,char*) ;

__attribute__((used)) static int
FUNC_4(struct us_data *VAR_3, unsigned char *VAR_4) {

 unsigned char *VAR_5 = VAR_3->iobuf;
 unsigned char *VAR_6 = VAR_3->iobuf;
 int VAR_7;

 FUNC_3(VAR_3, "Reading status...\n");

 FUNC_0(VAR_5, 0, 12);
 VAR_5[0] = 0xEC;
 VAR_5[1] = VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_5, 12);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_3->recv_bulk_pipe,
           VAR_6, 64, ((void*)0));
 *VAR_4 = VAR_6[0];
 return (VAR_7 == VAR_2 ? 0 : -VAR_0);
}
