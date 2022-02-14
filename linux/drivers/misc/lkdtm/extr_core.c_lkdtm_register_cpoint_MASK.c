
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct crashtype {int dummy; } ;
struct TYPE_4__ {int symbol_name; } ;
struct crashpoint {TYPE_1__ kprobe; } ;


 struct crashpoint* VAR_0 ;
 struct crashtype const* VAR_1 ;
 int FUNC_0 (struct crashtype const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct crashpoint *VAR_3,
     const struct crashtype *VAR_4)
{
 int VAR_5;


 if (!VAR_3->kprobe.symbol_name) {
  FUNC_0(VAR_4);
  return 0;
 }

 if (VAR_2 != ((void*)0))
  FUNC_3(VAR_2);

 VAR_0 = VAR_3;
 VAR_1 = VAR_4;
 VAR_2 = &VAR_3->kprobe;
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1("Couldn't register kprobe %s\n",
   VAR_3->kprobe.symbol_name);
  VAR_2 = ((void*)0);
  VAR_0 = ((void*)0);
  VAR_1 = ((void*)0);
 }

 return VAR_5;
}
