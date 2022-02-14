
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int pixfmt; int vframes; scalar_t__ valternate; int width; int height; int frame_size; int release; int vbandlength; int vendpoint; } ;
struct Nala_table_entry {scalar_t__ alternate; scalar_t__ compressed; int mode; } ;


 int VAR_0 ;
 struct Nala_table_entry** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pwc_device*,int ) ;
 void*** VAR_5 ;
 int FUNC_1 (struct pwc_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pwc_device *VAR_6, int VAR_7, int VAR_8,
          int VAR_9, int *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13 = 0;
 struct Nala_table_entry *VAR_14;
 int VAR_15[31] =
 {
    0, 0, 0, 0, 4,
    5, 5, 7, 7, 10,
   10, 10, 12, 12, 15,
   15, 15, 15, 20, 20,
   20, 20, 20, 24, 24,
   24, 24, 24, 24, 24,
   24
 };
 int VAR_16[31] =
 { 0, 0, 0, 0, 0,
   1, 1, 1, 2, 2,
   3, 3, 4, 4, 4,
   5, 5, 5, 5, 5,
   6, 6, 6, 6, 7,
   7, 7, 7, 7, 7,
   7
 };

 if (VAR_7 < 0 || VAR_7 > VAR_2)
  return -VAR_0;
 if (VAR_9 < 4)
  VAR_9 = 4;
 else if (VAR_7 > VAR_3 && VAR_9 > 15)
  VAR_9 = 15;
 else if (VAR_9 > 25)
  VAR_9 = 25;
 VAR_9 = VAR_15[VAR_9];
 VAR_12 = VAR_16[VAR_9];
 VAR_14 = &VAR_1[VAR_7][VAR_12];
 if (VAR_14->alternate == 0)
  return -VAR_0;

 if (VAR_11)
  VAR_13 = FUNC_1(VAR_6, VAR_6->vendpoint,
      VAR_14->mode, 3);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_14->compressed && VAR_8 == VAR_4)
  FUNC_0(VAR_6, VAR_14->mode);


 VAR_6->pixfmt = VAR_8;
 VAR_6->vframes = VAR_9;
 VAR_6->valternate = VAR_14->alternate;
 VAR_6->width = VAR_5[VAR_7][0];
 VAR_6->height = VAR_5[VAR_7][1];
 VAR_6->frame_size = (VAR_6->width * VAR_6->height * 3) / 2;
 if (VAR_14->compressed) {
  if (VAR_6->release < 5) {
   VAR_6->vbandlength = 528;
   VAR_6->frame_size /= 4;
  }
  else {
   VAR_6->vbandlength = 704;
   VAR_6->frame_size /= 3;
  }
 }
 else
  VAR_6->vbandlength = 0;


 *VAR_10 = 3;

 return 0;
}
