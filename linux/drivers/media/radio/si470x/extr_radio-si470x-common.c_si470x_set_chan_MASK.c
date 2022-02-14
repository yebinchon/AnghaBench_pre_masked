
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct si470x_device {int (* get_register ) (struct si470x_device*,size_t) ;int* registers; int (* set_register ) (struct si470x_device*,size_t) ;TYPE_1__ videodev; int completion; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si470x_device*,size_t) ;
 int FUNC_4 (struct si470x_device*,size_t) ;
 int FUNC_5 (struct si470x_device*,size_t) ;
 int VAR_8 ;
 unsigned long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct si470x_device *VAR_9, unsigned short VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 bool VAR_13 = 0;

 VAR_11 = VAR_9->get_register(VAR_9, VAR_3);
 if (VAR_11)
  return VAR_11;

 if ((VAR_9->registers[VAR_3] & (VAR_5|VAR_4))
  != (VAR_5|VAR_4)) {
  return 0;
 }


 VAR_9->registers[VAR_0] &= ~VAR_1;
 VAR_9->registers[VAR_0] |= VAR_2 | VAR_10;
 VAR_11 = VAR_9->set_register(VAR_9, VAR_0);
 if (VAR_11 < 0)
  goto done;


 FUNC_2(&VAR_9->completion);
 VAR_12 = FUNC_6(&VAR_9->completion,
      FUNC_1(VAR_8));
 if (VAR_12 == 0)
  VAR_13 = 1;

 if ((VAR_9->registers[VAR_6] & VAR_7) == 0)
  FUNC_0(&VAR_9->videodev.dev, "tune does not complete\n");
 if (VAR_13)
  FUNC_0(&VAR_9->videodev.dev,
   "tune timed out after %u ms\n", VAR_8);


 VAR_9->registers[VAR_0] &= ~VAR_2;
 VAR_11 = VAR_9->set_register(VAR_9, VAR_0);

done:
 return VAR_11;
}
