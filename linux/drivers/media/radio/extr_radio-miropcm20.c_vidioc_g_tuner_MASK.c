
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_tuner {int rangelow; int rangehigh; int signal; int capability; int rxsubchans; int audmode; int type; int name; scalar_t__ index; } ;
struct pcm20 {int aci; int audmode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct pcm20* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_12, void *VAR_13,
    struct v4l2_tuner *VAR_14)
{
 struct pcm20 *VAR_15 = FUNC_3(VAR_12);
 int VAR_16;
 u8 VAR_17;

 if (VAR_14->index)
  return -VAR_2;
 FUNC_2(VAR_14->name, "FM", sizeof(VAR_14->name));
 VAR_14->type = VAR_8;
 VAR_14->rangelow = 87*16000;
 VAR_14->rangehigh = 108*16000;
 VAR_16 = FUNC_1(VAR_15->aci, VAR_0, -1, -1);
 VAR_14->signal = (VAR_16 & 0x80) ? 0 : 0xffff;


 VAR_16 = FUNC_1(VAR_15->aci, VAR_1, -1, -1);
 VAR_14->rxsubchans = (VAR_16 & 0x40) ? VAR_9 :
     VAR_11;
 VAR_14->capability = VAR_4 | VAR_7 |
   VAR_5 | VAR_6;
 VAR_14->audmode = VAR_15->audmode;
 VAR_16 = FUNC_0(VAR_15->aci, VAR_3, &VAR_17, 1);
 if (VAR_16 >= 0 && VAR_17)
  VAR_14->rxsubchans |= VAR_10;
 return 0;
}
