
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_midi_opts {int refcnt; int id_allocated; char* id; int lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct f_midi_opts* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct f_midi_opts *VAR_6 = FUNC_4(VAR_3);
 int VAR_7;
 char *VAR_8;

 FUNC_2(&VAR_6->lock);
 if (VAR_6->refcnt > 1) {
  VAR_7 = -VAR_0;
  goto end;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (!VAR_8) {
  VAR_7 = -VAR_1;
  goto end;
 }
 if (VAR_6->id_allocated)
  FUNC_0(VAR_6->id);
 VAR_6->id = VAR_8;
 VAR_6->id_allocated = 1;
 VAR_7 = VAR_5;
end:
 FUNC_3(&VAR_6->lock);
 return VAR_7;
}
