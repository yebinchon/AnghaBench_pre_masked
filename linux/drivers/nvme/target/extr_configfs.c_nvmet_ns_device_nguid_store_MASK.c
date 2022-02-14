
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvmet_subsys {int lock; } ;
struct nvmet_ns {int nguid; scalar_t__ enabled; struct nvmet_subsys* subsys; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
typedef int nguid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct nvmet_ns* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nvmet_ns *VAR_5 = FUNC_5(VAR_2);
 struct nvmet_subsys *VAR_6 = VAR_5->subsys;
 u8 VAR_7[16];
 const char *VAR_8 = VAR_3;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_6->lock);
 if (VAR_5->enabled) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if (VAR_8 + 2 > VAR_3 + VAR_4) {
   VAR_10 = -VAR_1;
   goto out_unlock;
  }
  if (!FUNC_1(VAR_8[0]) || !FUNC_1(VAR_8[1])) {
   VAR_10 = -VAR_1;
   goto out_unlock;
  }

  VAR_7[VAR_9] = (FUNC_0(VAR_8[0]) << 4) | FUNC_0(VAR_8[1]);
  VAR_8 += 2;

  if (*VAR_8 == '-' || *VAR_8 == ':')
   VAR_8++;
 }

 FUNC_2(&VAR_5->nguid, VAR_7, sizeof(VAR_7));
out_unlock:
 FUNC_4(&VAR_6->lock);
 return VAR_10 ? VAR_10 : VAR_4;
}
