
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_work {int vol_id; int lnum; int torture; struct ubi_wl_entry* e; int * func; } ;
struct ubi_wl_entry {int ec; int pnum; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_device*,struct ubi_work*) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int VAR_2 ;
 struct ubi_work* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ubi_device*,struct ubi_work*) ;
 int FUNC_4 (struct ubi_wl_entry*) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_3, struct ubi_wl_entry *VAR_4,
     int VAR_5, int VAR_6, int VAR_7, bool VAR_8)
{
 struct ubi_work *VAR_9;

 FUNC_4(VAR_4);

 FUNC_1("schedule erasure of PEB %d, EC %d, torture %d",
        VAR_4->pnum, VAR_4->ec, VAR_7);

 VAR_9 = FUNC_2(sizeof(struct ubi_work), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->func = &VAR_2;
 VAR_9->e = VAR_4;
 VAR_9->vol_id = VAR_5;
 VAR_9->lnum = VAR_6;
 VAR_9->torture = VAR_7;

 if (VAR_8)
  FUNC_0(VAR_3, VAR_9);
 else
  FUNC_3(VAR_3, VAR_9);
 return 0;
}
