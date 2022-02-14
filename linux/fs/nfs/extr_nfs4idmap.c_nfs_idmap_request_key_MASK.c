
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int flags; } ;
struct idmap {int idmap_mutex; TYPE_1__* cred; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * user_ns; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,size_t,char const*,int ,char**) ;
 struct key* FUNC_6 (int *,char*,char*) ;
 struct key* FUNC_7 (int *,char*,int *,char*,int ,struct idmap*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static struct key *FUNC_10(const char *VAR_5, size_t VAR_6,
      const char *VAR_7, struct idmap *VAR_8)
{
 char *VAR_9;
 struct key *VAR_10 = FUNC_0(-VAR_0);
 ssize_t VAR_11;

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7, FUNC_9(VAR_7), &VAR_9);
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);

 if (!VAR_8->cred || VAR_8->cred->user_ns == &VAR_2)
  VAR_10 = FUNC_6(&VAR_3, VAR_9, "");
 if (FUNC_1(VAR_10)) {
  FUNC_3(&VAR_8->idmap_mutex);
  VAR_10 = FUNC_7(&VAR_4,
      VAR_9, ((void*)0), "", 0, VAR_8);
  FUNC_4(&VAR_8->idmap_mutex);
 }
 if (!FUNC_1(VAR_10))
  FUNC_8(VAR_1, &VAR_10->flags);

 FUNC_2(VAR_9);
 return VAR_10;
}
