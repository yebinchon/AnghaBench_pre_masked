
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct rnd_state {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {int erasesize; int size; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,long long) ;
 int FUNC_5 (struct rnd_state*,scalar_t__,int) ;
 struct rnd_state VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_6(int VAR_11)
{
 uint32_t VAR_12;
 int VAR_13 = 0, VAR_14;
 loff_t VAR_15, VAR_16;
 loff_t VAR_17 = (loff_t)VAR_11 * VAR_5->erasesize;

 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_3 && VAR_0[VAR_14]; ++VAR_14)
  VAR_15 += VAR_5->erasesize;

 VAR_16 = VAR_5->size;
 for (VAR_14 = 0; VAR_14 < VAR_3 && VAR_0[VAR_3 - VAR_14 - 1]; ++VAR_14)
  VAR_16 -= VAR_5->erasesize;

 FUNC_5(&VAR_8, VAR_10, VAR_5->erasesize);
 for (VAR_12 = 0; VAR_12 < VAR_6 - 1; ++VAR_12, VAR_17 += VAR_7) {

  VAR_13 = FUNC_3(VAR_5, VAR_15, VAR_2, VAR_9);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_3(VAR_5, VAR_16 - VAR_2, VAR_2, VAR_9);
  if (VAR_13)
   return VAR_13;
  FUNC_2(VAR_9, 0, VAR_2);
  VAR_13 = FUNC_3(VAR_5, VAR_17, VAR_2, VAR_9);
  if (VAR_13)
   break;
  if (FUNC_0(VAR_9, VAR_10 + (VAR_12 * VAR_7), VAR_2)) {
   FUNC_4("error: verify failed at %#llx\n",
          (long long)VAR_17);
   VAR_4 += 1;
  }
 }

 if (VAR_17 <= VAR_16 - VAR_7 - VAR_7 && !VAR_0[VAR_11 + 1]) {
  struct rnd_state VAR_18 = VAR_8;


  VAR_13 = FUNC_3(VAR_5, VAR_15, VAR_2, VAR_9);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_3(VAR_5, VAR_16 - VAR_2, VAR_2, VAR_9);
  if (VAR_13)
   return VAR_13;
  FUNC_2(VAR_9, 0, VAR_2);
  VAR_13 = FUNC_3(VAR_5, VAR_17, VAR_2, VAR_9);
  if (VAR_13)
   return VAR_13;
  FUNC_1(VAR_1, VAR_10 + VAR_5->erasesize - VAR_7, VAR_7);
  FUNC_5(&VAR_8, VAR_1 + VAR_7, VAR_7);
  if (FUNC_0(VAR_9, VAR_1, VAR_2)) {
   FUNC_4("error: verify failed at %#llx\n",
          (long long)VAR_17);
   VAR_4 += 1;
  }
  VAR_8 = VAR_18;
 }
 return VAR_13;
}
