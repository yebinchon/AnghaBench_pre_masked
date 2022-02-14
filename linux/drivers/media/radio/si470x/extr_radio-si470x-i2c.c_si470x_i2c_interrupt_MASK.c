
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; size_t wr_index; int buf_size; int rd_index; int read_queue; int * buffer; int completion; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 unsigned short VAR_16 ;
 int FUNC_1 (int *,unsigned char**,int) ;
 int FUNC_2 (unsigned short,unsigned char**) ;
 int FUNC_3 (struct si470x_device*,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_17, void *VAR_18)
{
 struct si470x_device *VAR_19 = VAR_18;
 unsigned char VAR_20;
 unsigned char VAR_21;
 unsigned short VAR_22;
 unsigned short VAR_23;
 unsigned char VAR_24[3];
 int VAR_25 = 0;


 VAR_25 = FUNC_3(VAR_19, VAR_10);
 if (VAR_25 < 0)
  goto end;

 if (VAR_19->registers[VAR_10] & VAR_13)
  FUNC_0(&VAR_19->completion);


 if ((VAR_19->registers[VAR_14] & VAR_15) == 0)
  goto end;


 for (VAR_20 = 1; VAR_20 < VAR_5; VAR_20++) {
  VAR_25 = FUNC_3(VAR_19, VAR_10 + VAR_20);
  if (VAR_25 < 0)
   goto end;
 }


 if ((VAR_19->registers[VAR_10] & VAR_12) == 0)

  goto end;

 for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
  switch (VAR_21) {
  default:
   VAR_22 = (VAR_19->registers[VAR_10] &
     VAR_11) >> 9;
   VAR_23 = VAR_19->registers[VAR_1];
   break;
  case 1:
   VAR_22 = (VAR_19->registers[VAR_6] &
     VAR_7) >> 14;
   VAR_23 = VAR_19->registers[VAR_2];
   break;
  case 2:
   VAR_22 = (VAR_19->registers[VAR_6] &
     VAR_8) >> 12;
   VAR_23 = VAR_19->registers[VAR_3];
   break;
  case 3:
   VAR_22 = (VAR_19->registers[VAR_6] &
     VAR_9) >> 10;
   VAR_23 = VAR_19->registers[VAR_4];
   break;
  }


  FUNC_2(VAR_23, &VAR_24);
  VAR_24[2] = VAR_21;
  VAR_24[2] |= VAR_21 << 3;
  if (VAR_22 > VAR_16)
   VAR_24[2] |= 0x80;
  else if (VAR_22 > 0)
   VAR_24[2] |= 0x40;


  FUNC_1(&VAR_19->buffer[VAR_19->wr_index], &VAR_24, 3);
  VAR_19->wr_index += 3;


  if (VAR_19->wr_index >= VAR_19->buf_size)
   VAR_19->wr_index = 0;


  if (VAR_19->wr_index == VAR_19->rd_index) {

   VAR_19->rd_index += 3;
   if (VAR_19->rd_index >= VAR_19->buf_size)
    VAR_19->rd_index = 0;
  }
 }

 if (VAR_19->wr_index != VAR_19->rd_index)
  FUNC_4(&VAR_19->read_queue);

end:
 return VAR_0;
}
