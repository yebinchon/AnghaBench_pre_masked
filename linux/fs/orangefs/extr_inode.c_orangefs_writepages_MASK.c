
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct orangefs_writepages {int maxpages; struct orangefs_writepages* bv; struct orangefs_writepages* pages; scalar_t__ npages; } ;
struct blk_plug {int dummy; } ;
struct bio_vec {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blk_plug*) ;
 int FUNC_1 (struct blk_plug*) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct orangefs_writepages*) ;
 struct orangefs_writepages* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct orangefs_writepages*,struct writeback_control*) ;
 int FUNC_7 (struct address_space*,struct writeback_control*,int ,struct orangefs_writepages*) ;

__attribute__((used)) static int FUNC_8(struct address_space *VAR_4,
    struct writeback_control *VAR_5)
{
 struct orangefs_writepages *VAR_6;
 struct blk_plug VAR_7;
 int VAR_8;
 VAR_6 = FUNC_4(sizeof(struct orangefs_writepages), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->maxpages = FUNC_5()/VAR_2;
 VAR_6->pages = FUNC_2(VAR_6->maxpages, sizeof(struct page *), VAR_1);
 if (!VAR_6->pages) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }
 VAR_6->bv = FUNC_2(VAR_6->maxpages, sizeof(struct bio_vec), VAR_1);
 if (!VAR_6->bv) {
  FUNC_3(VAR_6->pages);
  FUNC_3(VAR_6);
  return -VAR_0;
 }
 FUNC_1(&VAR_7);
 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_3, VAR_6);
 if (VAR_6->npages)
  VAR_8 = FUNC_6(VAR_6, VAR_5);
 FUNC_0(&VAR_7);
 FUNC_3(VAR_6->pages);
 FUNC_3(VAR_6->bv);
 FUNC_3(VAR_6);
 return VAR_8;
}
