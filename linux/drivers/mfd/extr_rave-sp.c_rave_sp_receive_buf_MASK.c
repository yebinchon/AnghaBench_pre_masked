
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct serdev_device {struct device dev; } ;
struct rave_sp_deframer {int state; unsigned char* data; int length; } ;
struct rave_sp {struct rave_sp_deframer deframer; } ;
 struct rave_sp* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rave_sp*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct serdev_device *VAR_0,
          const unsigned char *VAR_1, size_t VAR_2)
{
 struct device *VAR_3 = &VAR_0->dev;
 struct rave_sp *VAR_4 = FUNC_0(VAR_3);
 struct rave_sp_deframer *VAR_5 = &VAR_4->deframer;
 const unsigned char *VAR_6 = VAR_1;
 const unsigned char *VAR_7 = VAR_1 + VAR_2;

 while (VAR_6 < VAR_7) {
  const unsigned char VAR_8 = *VAR_6++;

  switch (VAR_5->state) {
  case 129:
   if (VAR_8 == 128)
    VAR_5->state = 131;
   break;

  case 131:



   switch (VAR_8) {
   case 132:
    FUNC_2(VAR_4,
            VAR_5->data,
            VAR_5->length);
    goto reset_framer;
   case 128:
    FUNC_1(VAR_3, "Bad frame: STX before ETX\n");
    goto reset_framer;
   case 133:
    VAR_5->state = 130;







    continue;
   }
  case 130:
   if (VAR_5->length == sizeof(VAR_5->data)) {
    FUNC_1(VAR_3, "Bad frame: Too long\n");
    goto reset_framer;
   }

   VAR_5->data[VAR_5->length++] = VAR_8;





   VAR_5->state = 131;
   break;
  }
 }






 return VAR_2;

reset_framer:







 VAR_5->state = 129;
 VAR_5->length = 0;

 return VAR_6 - VAR_1;
}
