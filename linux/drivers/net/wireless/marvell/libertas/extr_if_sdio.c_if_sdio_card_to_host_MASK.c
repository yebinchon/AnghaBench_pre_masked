
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct if_sdio_card {int* buffer; int ioport; int func; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct if_sdio_card*,int*,int) ;
 int FUNC_1 (struct if_sdio_card*,int*,int) ;
 int FUNC_2 (struct if_sdio_card*,int*,int) ;
 int FUNC_3 (struct if_sdio_card*,int*) ;
 int FUNC_4 (struct if_sdio_card*,int ) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct if_sdio_card *VAR_2)
{
 int VAR_3;
 u16 VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_2, &VAR_3);
 if (VAR_3)
  goto out;

 if (VAR_4 < 4) {
  FUNC_5("invalid packet size (%d bytes) from firmware\n",
   (int)VAR_4);
  VAR_3 = -VAR_0;
  goto out;
 }

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (VAR_3)
  goto out;






 VAR_6 = FUNC_7(VAR_2->func, VAR_4);

 VAR_3 = FUNC_8(VAR_2->func, VAR_2->buffer, VAR_2->ioport, VAR_6);
 if (VAR_3)
  goto out;

 VAR_6 = VAR_2->buffer[0] | (VAR_2->buffer[1] << 8);
 VAR_5 = VAR_2->buffer[2] | (VAR_2->buffer[3] << 8);

 FUNC_5("packet of type %d and size %d bytes\n",
  (int)VAR_5, (int)VAR_6);

 if (VAR_6 > VAR_4) {
  FUNC_5("packet fragment (%d > %d)\n",
   (int)VAR_6, (int)VAR_4);
  VAR_3 = -VAR_0;
  goto out;
 }

 if (VAR_6 < VAR_4) {
  FUNC_5("packet fragment (%d < %d)\n",
   (int)VAR_6, (int)VAR_4);
 }

 switch (VAR_5) {
 case 130:
  VAR_3 = FUNC_0(VAR_2, VAR_2->buffer + 4, VAR_6 - 4);
  if (VAR_3)
   goto out;
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_2, VAR_2->buffer + 4, VAR_6 - 4);
  if (VAR_3)
   goto out;
  break;
 case 128:
  VAR_3 = FUNC_2(VAR_2, VAR_2->buffer + 4, VAR_6 - 4);
  if (VAR_3)
   goto out;
  break;
 default:
  FUNC_5("invalid type (%d) from firmware\n",
    (int)VAR_5);
  VAR_3 = -VAR_0;
  goto out;
 }

out:
 if (VAR_3)
  FUNC_6("problem fetching packet from firmware\n");

 return VAR_3;
}
