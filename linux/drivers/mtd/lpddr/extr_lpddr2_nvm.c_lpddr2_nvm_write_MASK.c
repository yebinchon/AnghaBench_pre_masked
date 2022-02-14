
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
typedef int u_char ;
struct pcm_int_data {int bus_width; } ;
struct mtd_info {scalar_t__ writesize; struct map_info* priv; } ;
struct map_info {struct pcm_int_data* fldrv_priv; } ;
typedef size_t loff_t ;


 int FUNC_0 (size_t,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct map_info*,int ,int,size_t,size_t,int*) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct map_info*) ;
 int FUNC_6 (struct map_info*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_3, loff_t VAR_4,
    size_t VAR_5, size_t *VAR_6, const u_char *VAR_7)
{
 struct map_info *VAR_8 = VAR_3->priv;
 struct pcm_int_data *VAR_9 = VAR_8->fldrv_priv;
 u_long VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u_char *VAR_15 = (u_char *)VAR_7;
 int VAR_16 = 0;

 FUNC_3(&VAR_2);

 FUNC_6(VAR_8);


 VAR_10 = VAR_4;
 VAR_13 = VAR_5;
 VAR_12 = 0;

 while (VAR_12 < VAR_13) {
  if (!(FUNC_0(VAR_10, VAR_3->writesize))) {
   VAR_14 = VAR_15[VAR_12];
   VAR_14 += (VAR_15[VAR_12+1]) << 8;
   if (VAR_9->bus_width == 0x0004) {
    VAR_14 += (VAR_15[VAR_12+2]) << 16;
    VAR_14 += (VAR_15[VAR_12+3]) << 24;
   }
   VAR_16 = FUNC_1(VAR_8, VAR_1,
    VAR_14, VAR_10, 0x00, ((void*)0));
   if (VAR_16)
    goto out;

   VAR_10 += VAR_9->bus_width;
   VAR_12 += VAR_9->bus_width;
  } else {
   VAR_11 = FUNC_2(VAR_13 - VAR_12,
    (u_long) VAR_3->writesize);
   VAR_16 = FUNC_1(VAR_8, VAR_0,
    0x00, VAR_10, VAR_11, VAR_15 + VAR_12);
   if (VAR_16)
    goto out;

   VAR_10 += VAR_11;
   VAR_12 += VAR_11;
  }
 }

out:
 *VAR_6 = VAR_12;
 FUNC_5(VAR_8);
 FUNC_4(&VAR_2);
 return VAR_16;
}
