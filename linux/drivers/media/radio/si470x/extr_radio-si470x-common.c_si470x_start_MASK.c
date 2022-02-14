
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int* registers; int (* set_register ) (struct si470x_device*,size_t) ;int band; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct si470x_device*,int) ;
 int VAR_17 ;
 int FUNC_1 (struct si470x_device*,size_t) ;
 int FUNC_2 (struct si470x_device*,size_t) ;
 int FUNC_3 (struct si470x_device*,size_t) ;

int FUNC_4(struct si470x_device *VAR_18)
{
 int VAR_19;


 VAR_18->registers[VAR_2] =
  VAR_3 | VAR_4 | VAR_5;
 VAR_19 = VAR_18->set_register(VAR_18, VAR_2);
 if (VAR_19 < 0)
  goto done;


 VAR_18->registers[VAR_6] |= VAR_11 | VAR_12 |
     VAR_10;
 VAR_18->registers[VAR_6] &= ~VAR_8;
 VAR_18->registers[VAR_6] |= VAR_9;
 if (VAR_16)
  VAR_18->registers[VAR_6] |= VAR_7;
 VAR_19 = VAR_18->set_register(VAR_18, VAR_6);
 if (VAR_19 < 0)
  goto done;


 VAR_18->registers[VAR_13] =
  (0x1f << 8) |
  ((VAR_18->band << 6) & VAR_14) |
  ((VAR_17 << 4) & VAR_15) |
  15;
 VAR_19 = VAR_18->set_register(VAR_18, VAR_13);
 if (VAR_19 < 0)
  goto done;


 VAR_19 = FUNC_0(VAR_18,
  VAR_18->registers[VAR_0] & VAR_1);

done:
 return VAR_19;
}
