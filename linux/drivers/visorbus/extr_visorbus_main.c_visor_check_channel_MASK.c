
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct channel_header {scalar_t__ size; scalar_t__ version_id; scalar_t__ signature; int chtype; } ;
typedef int guid_t ;


 int FUNC_0 (struct device*,char*,char*,int const*,scalar_t__,int *) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int const*) ;

int FUNC_3(struct channel_header *VAR_0, struct device *VAR_1,
   const guid_t *VAR_2, char *VAR_3,
   u64 VAR_4, u32 VAR_5,
   u64 VAR_6)
{
 if (!FUNC_2(VAR_2)) {

  if (!FUNC_1(&VAR_0->chtype, VAR_2)) {
   FUNC_0(VAR_1, "Channel mismatch on channel=%s(%pUL) field=type expected=%pUL actual=%pUL\n",
    VAR_3, VAR_2, VAR_2,
    &VAR_0->chtype);
   return 0;
  }
 }

 if (VAR_4 > 0) {
  if (VAR_0->size < VAR_4) {
   FUNC_0(VAR_1, "Channel mismatch on channel=%s(%pUL) field=size expected=0x%-8.8Lx actual=0x%-8.8Lx\n",
    VAR_3, VAR_2,
    (unsigned long long)VAR_4,
    VAR_0->size);
   return 0;
  }
 }

 if (VAR_5 > 0) {
  if (VAR_0->version_id != VAR_5) {
   FUNC_0(VAR_1, "Channel mismatch on channel=%s(%pUL) field=version expected=0x%-8.8lx actual=0x%-8.8x\n",
    VAR_3, VAR_2,
    (unsigned long)VAR_5,
    VAR_0->version_id);
   return 0;
  }
 }

 if (VAR_6 > 0) {
  if (VAR_0->signature != VAR_6) {
   FUNC_0(VAR_1, "Channel mismatch on channel=%s(%pUL) field=signature expected=0x%-8.8Lx actual=0x%-8.8Lx\n",
    VAR_3, VAR_2, VAR_6,
    VAR_0->signature);
   return 0;
  }
 }
 return 1;
}
