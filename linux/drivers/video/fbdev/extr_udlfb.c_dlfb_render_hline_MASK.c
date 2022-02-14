
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef char u8 ;
typedef int u32 ;
struct urb {char* transfer_buffer; int transfer_buffer_length; } ;
struct dlfb_data {int base16; int backing_buffer; } ;


 int FUNC_0 (int const**,int const*,int*,char**,char*,unsigned long,int*) ;
 struct urb* FUNC_1 (struct dlfb_data*) ;
 scalar_t__ FUNC_2 (struct dlfb_data*,struct urb*,int) ;
 scalar_t__ FUNC_3 (char const*,char const**,int*) ;

__attribute__((used)) static int FUNC_4(struct dlfb_data *VAR_0, struct urb **VAR_1,
         const char *VAR_2, char **VAR_3,
         u32 VAR_4, u32 VAR_5,
         int *VAR_6, int *VAR_7)
{
 const u8 *VAR_8, *VAR_9, *VAR_10;
 u32 VAR_11 = VAR_0->base16 + VAR_4;
 struct urb *VAR_12 = *VAR_1;
 u8 *VAR_13 = *VAR_3;
 u8 *VAR_14 = (u8 *) VAR_12->transfer_buffer + VAR_12->transfer_buffer_length;
 unsigned long VAR_15 = 0;

 VAR_8 = (u8 *) (VAR_2 + VAR_4);
 VAR_10 = VAR_8;
 VAR_9 = VAR_10 + VAR_5;

 if (VAR_0->backing_buffer) {
  int VAR_16;
  const u8 *VAR_17 = (u8 *) (VAR_0->backing_buffer
      + VAR_4);

  VAR_15 = (unsigned long)VAR_17 - (unsigned long)VAR_8;

  *VAR_6 += FUNC_3(VAR_17, &VAR_10,
   &VAR_5);

  VAR_16 = VAR_10 - VAR_8;
  VAR_9 = VAR_10 + VAR_5;
  VAR_11 += VAR_16;
  VAR_17 += VAR_16;
  VAR_8 += VAR_16;
 }

 while (VAR_10 < VAR_9) {

  FUNC_0((const uint16_t **) &VAR_10,
        (const uint16_t *) VAR_9, &VAR_11,
   (u8 **) &VAR_13, (u8 *) VAR_14, VAR_15,
   VAR_6);

  if (VAR_13 >= VAR_14) {
   int VAR_18 = VAR_13 - (u8 *) VAR_12->transfer_buffer;
   if (FUNC_2(VAR_0, VAR_12, VAR_18))
    return 1;
   *VAR_7 += VAR_18;
   VAR_12 = FUNC_1(VAR_0);
   if (!VAR_12)
    return 1;
   *VAR_1 = VAR_12;
   VAR_13 = VAR_12->transfer_buffer;
   VAR_14 = &VAR_13[VAR_12->transfer_buffer_length];
  }
 }

 *VAR_3 = VAR_13;

 return 0;
}
