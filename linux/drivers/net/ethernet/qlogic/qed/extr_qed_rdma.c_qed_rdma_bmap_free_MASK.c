
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct qed_hwfn {int dummy; } ;
struct qed_bmap {unsigned long* bitmap; int max_count; int name; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int,...) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 (int *,char*,int) ;

void FUNC_5(struct qed_hwfn *VAR_0,
   struct qed_bmap *VAR_1, bool VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1->bitmap, VAR_1->max_count);
 int VAR_4 = VAR_1->max_count / (64 * 8);
 int VAR_5 = VAR_4 * 8 +
     FUNC_0(VAR_1->max_count % (64 * 8), 64);
 u64 *VAR_6 = (u64 *)VAR_1->bitmap;
 int VAR_7, VAR_8, VAR_9;
 u8 VAR_10[200] = { 0 };

 if (!VAR_3 || !VAR_2)
  goto end;

 FUNC_1(VAR_0,
    "%s bitmap not free - size=%d, weight=%d, 512 bits per line\n",
    VAR_1->name, VAR_1->max_count, VAR_3);


 for (VAR_8 = 0, VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_8 += 8)
  if (FUNC_2((unsigned long *)&VAR_6[VAR_8], 64 * 8))
   FUNC_1(VAR_0,
      "line 0x%04x: 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx\n",
      VAR_7,
      VAR_6[VAR_8],
      VAR_6[VAR_8 + 1],
      VAR_6[VAR_8 + 2],
      VAR_6[VAR_8 + 3],
      VAR_6[VAR_8 + 4],
      VAR_6[VAR_8 + 5],
      VAR_6[VAR_8 + 6], VAR_6[VAR_8 + 7]);


 if ((VAR_1->max_count % (64 * 8)) &&
     (FUNC_2((unsigned long *)&VAR_6[VAR_8],
      VAR_1->max_count - VAR_8 * 64))) {
  VAR_9 = FUNC_4(VAR_10, "line 0x%04x: ", VAR_7);
  for (; VAR_8 < VAR_5; VAR_8++)
   VAR_9 += FUNC_4(VAR_10 + VAR_9,
       "0x%016llx ", VAR_6[VAR_8]);
  FUNC_1(VAR_0, "%s\n", VAR_10);
 }

end:
 FUNC_3(VAR_1->bitmap);
 VAR_1->bitmap = ((void*)0);
}
