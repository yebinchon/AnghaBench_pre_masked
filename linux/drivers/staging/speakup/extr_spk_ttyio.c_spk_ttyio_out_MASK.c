
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spk_synth {scalar_t__ alive; int long_name; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* write ) (TYPE_2__*,char const*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct spk_synth *VAR_2, const char VAR_3)
{
 FUNC_0(&VAR_1);
 if (VAR_2->alive && VAR_0 && VAR_0->ops->write) {
  int VAR_4 = VAR_0->ops->write(VAR_0, &VAR_3, 1);

  FUNC_1(&VAR_1);
  if (VAR_4 == 0)

   return 0;
  if (VAR_4 < 0) {
   FUNC_2("%s: I/O error, deactivating speakup\n",
    VAR_2->long_name);




   VAR_2->alive = 0;
   FUNC_3();
   return 0;
  }
  return 1;
 }

 FUNC_1(&VAR_1);
 return 0;
}
