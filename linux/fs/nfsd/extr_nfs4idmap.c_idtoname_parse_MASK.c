
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expiry_time; int flags; } ;
struct ent {TYPE_1__ h; int name; int id; int type; int authname; } ;
struct cache_detail {int dummy; } ;
typedef int ent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,struct cache_detail*) ;
 scalar_t__ FUNC_1 (char**) ;
 struct ent* FUNC_2 (struct cache_detail*,struct ent*) ;
 struct ent* FUNC_3 (struct cache_detail*,struct ent*,struct ent*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ent*,int ,int) ;
 int FUNC_8 (char**,char*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,char**,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(struct cache_detail *VAR_8, char *VAR_9, int VAR_10)
{
 struct ent VAR_11, *VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15;
 int VAR_16 = -VAR_1;

 if (VAR_9[VAR_10 - 1] != '\n')
  return (-VAR_1);
 VAR_9[VAR_10 - 1]= '\0';

 VAR_13 = FUNC_5(VAR_7, VAR_3);
 if (VAR_13 == ((void*)0))
  return (-VAR_2);

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));


 VAR_15 = FUNC_8(&VAR_9, VAR_13, VAR_7);
 if (VAR_15 <= 0 || VAR_15 >= VAR_4)
  goto out;
 FUNC_6(VAR_11.authname, VAR_13, sizeof(VAR_11.authname));


 if (FUNC_8(&VAR_9, VAR_13, VAR_7) <= 0)
  goto out;
 VAR_11.type = FUNC_11(VAR_13, "user") == 0 ?
  VAR_6 : VAR_5;


 if (FUNC_8(&VAR_9, VAR_13, VAR_7) <= 0)
  goto out;
 VAR_11.id = FUNC_10(VAR_13, &VAR_14, 10);
 if (VAR_14 == VAR_13)
  goto out;


 VAR_11.h.expiry_time = FUNC_1(&VAR_9);
 if (VAR_11.h.expiry_time == 0)
  goto out;

 VAR_16 = -VAR_2;
 VAR_12 = FUNC_2(VAR_8, &VAR_11);
 if (!VAR_12)
  goto out;


 VAR_16 = -VAR_1;
 VAR_15 = FUNC_8(&VAR_9, VAR_13, VAR_7);
 if (VAR_15 < 0 || VAR_15 >= VAR_4)
  goto out;
 if (VAR_15 == 0)
  FUNC_9(VAR_0, &VAR_11.h.flags);
 else
  FUNC_6(VAR_11.name, VAR_13, sizeof(VAR_11.name));
 VAR_16 = -VAR_2;
 VAR_12 = FUNC_3(VAR_8, &VAR_11, VAR_12);
 if (VAR_12 == ((void*)0))
  goto out;

 FUNC_0(&VAR_12->h, VAR_8);
 VAR_16 = 0;
out:
 FUNC_4(VAR_13);
 return VAR_16;
}
