
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btt_sb {size_t infooff; scalar_t__ nextoff; scalar_t__ external_nlba; scalar_t__ size; int list; void* external_lba_start; } ;
struct btt {size_t rawsize; int num_arenas; int init_state; void* nlba; int arena_list; int nd_btt; } ;
struct arena_info {size_t infooff; scalar_t__ nextoff; scalar_t__ external_nlba; scalar_t__ size; int list; void* external_lba_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct btt_sb* FUNC_0 (struct btt*,int ,int ,int ) ;
 int FUNC_1 (struct btt_sb*) ;
 int FUNC_2 (struct btt_sb*,struct btt_sb*) ;
 int FUNC_3 (struct btt_sb*) ;
 int FUNC_4 (struct btt_sb*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct btt*) ;
 int FUNC_8 (struct btt_sb*) ;
 struct btt_sb* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct btt_sb*) ;
 int FUNC_12 (int ,struct btt_sb*) ;
 int FUNC_13 (struct btt_sb*,struct btt_sb*,size_t) ;
 int FUNC_14 (struct btt_sb*) ;

__attribute__((used)) static int FUNC_15(struct btt *VAR_5)
{
 int VAR_6 = 0;
 struct arena_info *VAR_7;
 struct btt_sb *VAR_8;
 size_t VAR_9 = VAR_5->rawsize;
 u64 VAR_10 = 0;
 size_t VAR_11 = 0;
 int VAR_12 = 0;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 while (VAR_9) {

  VAR_7 = FUNC_0(VAR_5, 0, 0, 0);
  if (!VAR_7) {
   VAR_6 = -VAR_1;
   goto out_super;
  }

  VAR_7->infooff = VAR_11;
  VAR_6 = FUNC_2(VAR_7, VAR_8);
  if (VAR_6)
   goto out;

  if (!FUNC_12(VAR_5->nd_btt, VAR_8)) {
   if (VAR_9 == VAR_5->rawsize) {
    VAR_5->init_state = VAR_3;
    FUNC_6(FUNC_14(VAR_7), "No existing arenas\n");
    goto out;
   } else {
    FUNC_5(FUNC_14(VAR_7),
      "Found corrupted metadata!\n");
    VAR_6 = -VAR_0;
    goto out;
   }
  }

  VAR_7->external_lba_start = VAR_10;
  FUNC_13(VAR_7, VAR_8, VAR_11);

  VAR_6 = FUNC_11(VAR_7);
  if (VAR_6) {
   FUNC_5(FUNC_14(VAR_7),
    "Unable to deduce log/padding indices\n");
   goto out;
  }

  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_4(VAR_7);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_3(VAR_7);
  if (VAR_6)
   goto out;

  FUNC_10(&VAR_7->list, &VAR_5->arena_list);

  VAR_9 -= VAR_7->size;
  VAR_11 += VAR_7->size;
  VAR_10 += VAR_7->external_nlba;
  VAR_12++;

  if (VAR_7->nextoff == 0)
   break;
 }
 VAR_5->num_arenas = VAR_12;
 VAR_5->nlba = VAR_10;
 VAR_5->init_state = VAR_4;

 FUNC_8(VAR_8);
 return VAR_6;

 out:
 FUNC_8(VAR_7);
 FUNC_7(VAR_5);
 out_super:
 FUNC_8(VAR_8);
 return VAR_6;
}
