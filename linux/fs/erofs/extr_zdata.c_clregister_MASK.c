
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
struct z_erofs_pcluster {int length; int clusterbits; int *** next; TYPE_1__ obj; int algorithmformat; } ;
struct z_erofs_collector {struct z_erofs_collection* cl; struct z_erofs_pcluster* pcl; int **** owned_head; struct z_erofs_pcluster* tailpcl; int mode; } ;
struct z_erofs_collection {int pageofs; int lock; } ;
struct inode {int i_sb; } ;
struct erofs_map_blocks {int m_pa; int m_llen; int m_flags; int m_la; } ;
struct TYPE_4__ {int* z_physical_clusterbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct z_erofs_collection* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int ** VAR_12 ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 struct z_erofs_pcluster* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct z_erofs_pcluster*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_13 ;
 int FUNC_7 (struct z_erofs_pcluster*) ;
 struct z_erofs_collection* FUNC_8 (struct z_erofs_pcluster*) ;

__attribute__((used)) static struct z_erofs_collection *FUNC_9(struct z_erofs_collector *VAR_14,
          struct inode *VAR_15,
          struct erofs_map_blocks *VAR_16)
{
 struct z_erofs_pcluster *VAR_17;
 struct z_erofs_collection *VAR_18;
 int VAR_19;


 VAR_17 = FUNC_3(VAR_13, VAR_5);
 if (!VAR_17)
  return FUNC_1(-VAR_2);

 FUNC_7(VAR_17);
 VAR_17->obj.index = VAR_16->m_pa >> VAR_7;

 VAR_17->length = (VAR_16->m_llen << VAR_11) |
  (VAR_16->m_flags & VAR_3 ?
   VAR_10 : 0);

 if (VAR_16->m_flags & VAR_4)
  VAR_17->algorithmformat = VAR_8;
 else
  VAR_17->algorithmformat = VAR_9;

 VAR_17->clusterbits = FUNC_0(VAR_15)->z_physical_clusterbits[0];
 VAR_17->clusterbits -= VAR_7;


 VAR_17->next = *VAR_14->owned_head;
 VAR_14->mode = VAR_0;

 VAR_18 = FUNC_8(VAR_17);
 VAR_18->pageofs = VAR_16->m_la & ~VAR_6;





 FUNC_5(&VAR_18->lock);

 VAR_19 = FUNC_2(VAR_15->i_sb, &VAR_17->obj, 0);
 if (VAR_19) {
  FUNC_6(&VAR_18->lock);
  FUNC_4(VAR_13, VAR_17);
  return FUNC_1(-VAR_1);
 }

 if (VAR_14->owned_head == VAR_12)
  VAR_14->tailpcl = VAR_17;
 VAR_14->owned_head = &VAR_17->next;
 VAR_14->pcl = VAR_17;
 VAR_14->cl = VAR_18;
 return VAR_18;
}
