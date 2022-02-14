
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mjpeg_header {int dummy; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;
typedef int str ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;



 unsigned int FUNC_0 (struct delta_ctx*,unsigned char*,unsigned int,struct mjpeg_header*) ;
 int FUNC_1 (int ,char*,int ,unsigned int,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (struct mjpeg_header*,unsigned char*,int) ;

int FUNC_4(struct delta_ctx *VAR_3,
       unsigned char *VAR_4, unsigned int VAR_5,
       struct mjpeg_header *VAR_6,
       unsigned int *VAR_7)
{
 struct delta_dev *VAR_8 = VAR_3->dev;
 unsigned char VAR_9[200];

 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;

 if (VAR_5 < 2)
  goto err_no_more;

 VAR_11 = 0;
 while (1) {
  if (VAR_4[VAR_11] == VAR_2)
   switch (VAR_4[VAR_11 + 1]) {
   case 128:
    VAR_12 = 1;
    *VAR_7 = VAR_11;
    break;

   case 130:
   case 129:
    if (!VAR_12) {
     FUNC_2(VAR_8->dev,
      "%s   wrong sequence, got SOF while SOI not seen\n",
      VAR_3->name);
     return -VAR_0;
    }

    VAR_10 = FUNC_0(VAR_3,
          &VAR_4[VAR_11 + 2],
          VAR_5 - (VAR_11 + 2),
          VAR_6);
    if (VAR_10)
     goto err;

    goto done;

   default:
    break;
   }

  VAR_11++;
  if ((VAR_11 + 2) >= VAR_5)
   goto err_no_more;
 }

done:
 FUNC_1(VAR_8->dev,
  "%s   found header @ offset %d:\n%s", VAR_3->name,
  *VAR_7,
  FUNC_3(VAR_6, VAR_9, sizeof(VAR_9)));
 return 0;

err_no_more:
 FUNC_2(VAR_8->dev,
  "%s   no header found within %d bytes input stream\n",
  VAR_3->name, VAR_5);
 return -VAR_1;

err:
 return VAR_10;
}
