
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_erofs_collector {int cl; scalar_t__ owned_head; scalar_t__ mode; int compressedpages; TYPE_1__* pcl; int vector; } ;
struct z_erofs_collection {int vcnt; int pagevec; } ;
struct inode {int dummy; } ;
struct erofs_map_blocks {int m_pa; } ;
struct TYPE_2__ {int compressed_pages; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct z_erofs_collection* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct z_erofs_collection*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct z_erofs_collection*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct z_erofs_collection* FUNC_5 (struct z_erofs_collector*,struct inode*,struct erofs_map_blocks*) ;
 struct z_erofs_collection* FUNC_6 (struct z_erofs_collector*,struct inode*,struct erofs_map_blocks*) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct z_erofs_collector *VAR_7,
       struct inode *VAR_8,
       struct erofs_map_blocks *VAR_9)
{
 struct z_erofs_collection *VAR_10;

 FUNC_0(VAR_7->cl);


 FUNC_0(VAR_7->owned_head == VAR_5);
 FUNC_0(VAR_7->owned_head == VAR_6);

 if (!FUNC_3(VAR_9->m_pa)) {
  FUNC_0(1);
  return -VAR_2;
 }

repeat:
 VAR_10 = FUNC_5(VAR_7, VAR_8, VAR_9);
 if (!VAR_10) {
  VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_9);

  if (VAR_10 == FUNC_1(-VAR_1))
   goto repeat;
 }

 if (FUNC_2(VAR_10))
  return FUNC_4(VAR_10);

 FUNC_7(&VAR_7->vector, VAR_4,
      VAR_10->pagevec, VAR_10->vcnt);

 VAR_7->compressedpages = VAR_7->pcl->compressed_pages;
 if (VAR_7->mode <= VAR_0)
  VAR_7->compressedpages += VAR_3;
 return 0;
}
