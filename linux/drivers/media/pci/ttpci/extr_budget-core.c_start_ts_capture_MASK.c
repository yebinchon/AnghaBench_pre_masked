
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct TYPE_4__ {int dma; } ;
struct budget {int buffer_size; int buffer_height; int buffer_width; struct saa7146_dev* dev; TYPE_2__ pt; int video_port; TYPE_1__* card; scalar_t__ ttbp; int grabbing; int fe_synced; int feeding; } ;
struct TYPE_3__ {int type; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct saa7146_dev*,int) ;
 int FUNC_1 (struct saa7146_dev*,int) ;
 int FUNC_2 (int,char*,struct budget*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct saa7146_dev*,int ) ;
 int FUNC_6 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct budget *VAR_21)
{
 struct saa7146_dev *VAR_22 = VAR_21->dev;

 FUNC_2(2, "budget: %p\n", VAR_21);

 if (!VAR_21->feeding || !VAR_21->fe_synced)
  return 0;

 FUNC_6(VAR_22, VAR_14, VAR_10);

 FUNC_4(VAR_21->grabbing, 0x00, VAR_21->buffer_size);

 FUNC_6(VAR_22, VAR_18, 0x001c0000 | (FUNC_5(VAR_22, VAR_18) & ~0x001f0000));

 VAR_21->ttbp = 0;
 switch(VAR_21->card->type) {
 case 132:
  FUNC_6(VAR_22, VAR_5, 0x04000000);
  FUNC_6(VAR_22, VAR_15, (VAR_8 | VAR_12));
  FUNC_6(VAR_22, VAR_3, 0x00000000);
  break;
 case 128:
  FUNC_6(VAR_22, VAR_5, 0x00000200);
  FUNC_6(VAR_22, VAR_15, (VAR_9 | VAR_13));
  FUNC_6(VAR_22, VAR_3, 0x60000000);
  break;
 case 133:
 case 130:
 case 129:
 case 131:
  if (VAR_21->video_port == VAR_4) {
   FUNC_6(VAR_22, VAR_5, 0x06000200);
   FUNC_6(VAR_22, VAR_15, (VAR_8 | VAR_12 | VAR_9 | VAR_13));
   FUNC_6(VAR_22, VAR_3, 0x00000000);
  } else {
   FUNC_6(VAR_22, VAR_5, 0x00000600);
   FUNC_6(VAR_22, VAR_15, (VAR_8 | VAR_12 | VAR_9 | VAR_13));
   FUNC_6(VAR_22, VAR_3, 0x60000000);
  }
  break;
 default:
  if (VAR_21->video_port == VAR_4) {
   FUNC_6(VAR_22, VAR_5, 0x06000200);
   FUNC_6(VAR_22, VAR_15, (VAR_8 | VAR_12 | VAR_9 | VAR_13));
   FUNC_6(VAR_22, VAR_3, 0x00000000);
  } else {
   FUNC_6(VAR_22, VAR_5, 0x02000600);
   FUNC_6(VAR_22, VAR_15, (VAR_8 | VAR_12 | VAR_9 | VAR_13));
   FUNC_6(VAR_22, VAR_3, 0x60000000);
  }
 }

 FUNC_6(VAR_22, VAR_15, (VAR_7 | VAR_11));
 FUNC_3(10);

 FUNC_6(VAR_22, VAR_1, 0);
 if (VAR_21->buffer_size > VAR_21->buffer_height * VAR_21->buffer_width) {

  FUNC_6(VAR_22, VAR_0, VAR_21->buffer_height * VAR_21->buffer_width);
 } else {

  FUNC_6(VAR_22, VAR_0, 0);
 }
 FUNC_6(VAR_22, VAR_20, VAR_21->buffer_size);
 FUNC_6(VAR_22, VAR_2, VAR_21->pt.dma | VAR_16 | 0x90);

 FUNC_6(VAR_22, VAR_19, VAR_21->buffer_width);
 FUNC_6(VAR_22, VAR_17,
   (VAR_21->buffer_height << 16) | VAR_21->buffer_width);

 FUNC_6(VAR_22, VAR_15, (VAR_6 | VAR_10));

 FUNC_1(VAR_21->dev, VAR_9);
 FUNC_0(VAR_21->dev, VAR_9);
 FUNC_6(VAR_22, VAR_14, (VAR_6 | VAR_10));

 return 0;
}
