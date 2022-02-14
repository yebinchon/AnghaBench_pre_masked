
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct sclp_sd_data {size_t esize_bytes; size_t dsize_bytes; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;
 unsigned long FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int ,int ,unsigned long,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sclp_sd_data *VAR_8, u8 VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0;
 unsigned long VAR_12, VAR_13 = 0;
 void *VAR_14 = ((void*)0);
 int VAR_15;

 VAR_12 = FUNC_0(VAR_3 | VAR_2);
 if (!VAR_12)
  return -VAR_0;


 VAR_15 = FUNC_5(VAR_12, VAR_6, VAR_9, 0, 0, &VAR_10, &VAR_11);
 if (VAR_15)
  goto out;
 if (VAR_10 == 0)
  goto out_result;


 VAR_14 = FUNC_7(FUNC_1((size_t)VAR_10, VAR_4));
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  goto out;
 }


 VAR_13 = FUNC_2((unsigned long) VAR_14, VAR_10);
 if (!VAR_13) {
  FUNC_6(VAR_14);
  VAR_15 = -VAR_0;
  goto out;
 }


 VAR_15 = FUNC_5(VAR_12, VAR_7, VAR_9, VAR_13, (u64) VAR_14, &VAR_10,
     &VAR_11);
 if (VAR_15) {

  if (VAR_15 == -VAR_1)
   FUNC_5(VAR_12, VAR_5, VAR_9, 0, 0, ((void*)0), ((void*)0));
  FUNC_6(VAR_14);
  goto out;
 }

out_result:
 VAR_8->esize_bytes = (size_t) VAR_11 * VAR_4;
 VAR_8->dsize_bytes = (size_t) VAR_10 * VAR_4;
 VAR_8->data = VAR_14;

out:
 FUNC_3(VAR_13);
 FUNC_4(VAR_12);

 return VAR_15;
}
