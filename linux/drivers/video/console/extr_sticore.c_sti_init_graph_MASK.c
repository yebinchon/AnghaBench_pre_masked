
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_struct {int lock; int text_planes; int glob_cfg; int init_graph; TYPE_1__* sti_data; } ;
struct sti_init_outptr {int errno; int text_planes; } ;
struct sti_init_inptr_ext {int text_planes; int ext_ptr; } ;
struct sti_init_inptr {int text_planes; int ext_ptr; } ;
struct TYPE_2__ {struct sti_init_outptr init_outptr; struct sti_init_inptr_ext init_inptr_ext; struct sti_init_inptr_ext init_inptr; } ;


 int FUNC_0 (struct sti_init_inptr_ext*) ;
 int VAR_0 ;
 int FUNC_1 (struct sti_init_inptr_ext*,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sti_struct*,int ,int *,struct sti_init_inptr_ext*,struct sti_init_outptr*,int ) ;

__attribute__((used)) static int FUNC_6(struct sti_struct *VAR_1)
{
 struct sti_init_inptr *VAR_2 = &VAR_1->sti_data->init_inptr;
 struct sti_init_inptr_ext *VAR_3 = &VAR_1->sti_data->init_inptr_ext;
 struct sti_init_outptr *VAR_4 = &VAR_1->sti_data->init_outptr;
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 FUNC_3(&VAR_1->lock, VAR_5);

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->text_planes = 3;
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_2->ext_ptr = FUNC_0(VAR_3);
 VAR_4->errno = 0;

 VAR_6 = FUNC_5(VAR_1, VAR_1->init_graph, &VAR_0, VAR_2,
  VAR_4, VAR_1->glob_cfg);

 if (VAR_6 >= 0)
  VAR_1->text_planes = VAR_4->text_planes;
 VAR_7 = VAR_4->errno;

 FUNC_4(&VAR_1->lock, VAR_5);

 if (VAR_6 < 0) {
  FUNC_2("STI init_graph failed (ret %d, errno %d)\n", VAR_6, VAR_7);
  return -1;
 }

 return 0;
}
