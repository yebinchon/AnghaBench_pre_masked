
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int pixfmt; int vframes; scalar_t__ valternate; int width; int height; int vbandlength; int frame_size; int vendpoint; } ;
struct Timon_table_entry {scalar_t__ alternate; int bandlength; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Timon_table_entry*** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pwc_device*,int ) ;
 void*** VAR_6 ;
 int FUNC_1 (struct pwc_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pwc_device *VAR_7, int VAR_8, int VAR_9,
    int VAR_10, int *VAR_11, int VAR_12)
{
 const struct Timon_table_entry *VAR_13;
 int VAR_14, VAR_15 = 0;

 if (VAR_8 >= VAR_2 || *VAR_11 < 0 || *VAR_11 > 3)
  return -VAR_0;
 if (VAR_10 < 5)
  VAR_10 = 5;
 else if (VAR_8 == VAR_3 && VAR_10 > 15)
  VAR_10 = 15;
 else if (VAR_10 > 30)
  VAR_10 = 30;
 VAR_14 = (VAR_10 / 5) - 1;


 do {
  VAR_13 = &VAR_4[VAR_8][VAR_14][*VAR_11];
  if (VAR_13->alternate != 0)
   break;
  (*VAR_11)++;
 } while (*VAR_11 <= 3);

 if (VAR_13->alternate == 0)
  return -VAR_1;

 if (VAR_12)
  VAR_15 = FUNC_1(VAR_7, VAR_7->vendpoint,
      VAR_13->mode, 13);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_13->bandlength > 0 && VAR_9 == VAR_5)
  FUNC_0(VAR_7, VAR_13->mode);


 VAR_7->pixfmt = VAR_9;
 VAR_7->vframes = (VAR_14 + 1) * 5;
 VAR_7->valternate = VAR_13->alternate;
 VAR_7->width = VAR_6[VAR_8][0];
 VAR_7->height = VAR_6[VAR_8][1];
 VAR_7->vbandlength = VAR_13->bandlength;
 if (VAR_13->bandlength > 0)
  VAR_7->frame_size = (VAR_13->bandlength * VAR_7->height) / 4;
 else
  VAR_7->frame_size = (VAR_7->width * VAR_7->height * 12) / 8;
 return 0;
}
