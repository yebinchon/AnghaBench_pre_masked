
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct imgchunk {scalar_t__ len; scalar_t__ addr; scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ dowrite; } ;
struct TYPE_3__ {scalar_t__ addr; scalar_t__ len; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct imgchunk *VAR_5, unsigned int *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15;
 u32 VAR_16;


 *VAR_6 = 0;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_4[VAR_8].addr == VAR_11) {

   VAR_5[VAR_10].len += VAR_4[VAR_8].len;
   VAR_11 += VAR_4[VAR_8].len;
  } else {

   (*VAR_6)++;
   VAR_10 = *VAR_6 - 1;
   VAR_5[VAR_10].addr = VAR_4[VAR_8].addr;
   VAR_5[VAR_10].len = VAR_4[VAR_8].len;
   VAR_11 = VAR_4[VAR_8].addr + VAR_4[VAR_8].len;


   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
    if (VAR_3[VAR_9].dowrite &&
        VAR_3[VAR_9].addr == VAR_5[VAR_10].addr) {
     VAR_5[VAR_10].addr -= 2;
     VAR_5[VAR_10].len += 2;
    }
   }
  }
 }





 for (VAR_8 = 0; VAR_8 < *VAR_6; VAR_8++) {
  VAR_5[VAR_8].data = FUNC_0(VAR_5[VAR_8].len, VAR_0);
  if (!VAR_5[VAR_8].data)
   return 1;

  FUNC_2("chunk[%d]: addr=0x%06x len=%d\n",
    VAR_8, VAR_5[VAR_8].addr, VAR_5[VAR_8].len);
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_12 = VAR_4[VAR_8].addr;
  VAR_13 = VAR_12 + VAR_4[VAR_8].len - 1;
  for (VAR_9 = 0; VAR_9 < *VAR_6; VAR_9++) {
   VAR_14 = VAR_5[VAR_9].addr;
   VAR_15 = VAR_14 + VAR_5[VAR_9].len - 1;
   if (VAR_12 >= VAR_14 && VAR_13 <= VAR_15)
    break;
  }
  if (((unsigned int)VAR_9) >= (*VAR_6)) {
   FUNC_3("s3rec(a=0x%06x,l=%d), no chunk match, exiting.\n",
          VAR_12, VAR_4[VAR_8].len);
   return 1;
  }
  VAR_16 = VAR_12 - VAR_14;
  FUNC_1(VAR_5[VAR_9].data + VAR_16, VAR_4[VAR_8].data, VAR_4[VAR_8].len);
 }

 return VAR_7;
}
