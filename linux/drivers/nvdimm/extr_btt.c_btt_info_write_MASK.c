
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btt_sb {int dummy; } ;
struct arena_info {int infooff; int info2off; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct arena_info*,int ,struct btt_sb*,int,int ) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (struct arena_info*) ;

__attribute__((used)) static int FUNC_4(struct arena_info *VAR_0, struct btt_sb *VAR_1)
{
 int VAR_2;






 FUNC_2(FUNC_3(VAR_0), !FUNC_0(VAR_0->infooff, 512),
  "arena->infooff: %#llx is unaligned\n", VAR_0->infooff);
 FUNC_2(FUNC_3(VAR_0), !FUNC_0(VAR_0->info2off, 512),
  "arena->info2off: %#llx is unaligned\n", VAR_0->info2off);

 VAR_2 = FUNC_1(VAR_0, VAR_0->info2off, VAR_1,
   sizeof(struct btt_sb), 0);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_0->infooff, VAR_1,
   sizeof(struct btt_sb), 0);
}
