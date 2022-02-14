
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inomap {TYPE_2__* im_agctl; int im_l2nbperiext; int im_nbperiext; int im_numfree; int im_numinos; int im_nextiag; int im_freeiag; } ;
struct inode {int i_mapping; int i_sb; } ;
struct dinomap_disk {TYPE_1__* in_agctl; void* in_l2nbperiext; void* in_nbperiext; void* in_numfree; void* in_numinos; void* in_nextiag; void* in_freeiag; } ;
struct TYPE_8__ {struct inomap* i_imap; } ;
struct TYPE_7__ {int l2nbperpage; } ;
struct TYPE_6__ {int numfree; int numinos; int extfree; int inofree; } ;
struct TYPE_5__ {void* numfree; void* numinos; void* extfree; void* inofree; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int ) ;
 struct metapage* FUNC_6 (struct inode*,int,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct metapage*) ;

int FUNC_9(struct inode *VAR_4)
{
 struct dinomap_disk *VAR_5;
 struct inomap *VAR_6 = FUNC_0(VAR_4)->i_imap;
 struct metapage *VAR_7;
 int VAR_8;





 VAR_7 = FUNC_6(VAR_4,
     VAR_1 << FUNC_1(VAR_4->i_sb)->l2nbperpage,
     VAR_3, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_7("diSync: get_metapage failed!");
  return -VAR_0;
 }


 VAR_5 = (struct dinomap_disk *) VAR_7->data;
 VAR_5->in_freeiag = FUNC_3(VAR_6->im_freeiag);
 VAR_5->in_nextiag = FUNC_3(VAR_6->im_nextiag);
 VAR_5->in_numinos = FUNC_3(FUNC_2(&VAR_6->im_numinos));
 VAR_5->in_numfree = FUNC_3(FUNC_2(&VAR_6->im_numfree));
 VAR_5->in_nbperiext = FUNC_3(VAR_6->im_nbperiext);
 VAR_5->in_l2nbperiext = FUNC_3(VAR_6->im_l2nbperiext);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->in_agctl[VAR_8].inofree =
      FUNC_3(VAR_6->im_agctl[VAR_8].inofree);
  VAR_5->in_agctl[VAR_8].extfree =
      FUNC_3(VAR_6->im_agctl[VAR_8].extfree);
  VAR_5->in_agctl[VAR_8].numinos =
      FUNC_3(VAR_6->im_agctl[VAR_8].numinos);
  VAR_5->in_agctl[VAR_8].numfree =
      FUNC_3(VAR_6->im_agctl[VAR_8].numfree);
 }


 FUNC_8(VAR_7);




 FUNC_5(VAR_4->i_mapping);

 FUNC_4(VAR_4, 0);

 return (0);
}
