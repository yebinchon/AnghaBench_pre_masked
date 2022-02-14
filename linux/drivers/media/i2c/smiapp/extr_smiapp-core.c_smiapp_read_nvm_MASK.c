
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smiapp_sensor {int nvm_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct smiapp_sensor*,scalar_t__,int*) ;
 int FUNC_1 (struct smiapp_sensor*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct smiapp_sensor *VAR_9,
      unsigned char *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17;

 VAR_14 = VAR_9->nvm_size / VAR_4;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_16 = FUNC_1(
   VAR_9,
   VAR_7, VAR_13);
  if (VAR_16)
   goto out;

  VAR_16 = FUNC_1(VAR_9,
        VAR_5,
        VAR_1 |
        VAR_2);
  if (VAR_16)
   goto out;

  for (VAR_11 = 1000; VAR_11 > 0; VAR_11--) {
   VAR_16 = FUNC_0(
    VAR_9,
    VAR_8, &VAR_12);

   if (VAR_16)
    goto out;

   if (VAR_12 & VAR_3)
    break;

  }
  if (!VAR_11) {
   VAR_16 = -VAR_0;
   goto out;
  }

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   VAR_16 = FUNC_0(
    VAR_9,
    VAR_6 + VAR_11,
    &VAR_15);
   if (VAR_16)
    goto out;

   *VAR_10++ = VAR_15;
  }
 }

out:
 VAR_17 = FUNC_1(VAR_9, VAR_5, 0);
 if (VAR_16 < 0)
  return VAR_16;
 else
  return VAR_17;
}
