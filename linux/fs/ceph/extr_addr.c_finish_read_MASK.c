
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int index; } ;
struct inode {int dummy; } ;
struct ceph_osd_request {int r_result; struct inode* r_inode; } ;
struct ceph_osd_data {scalar_t__ type; struct page** pages; scalar_t__ length; scalar_t__ alignment; } ;
struct TYPE_2__ {int blacklisted; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct inode*,struct page*) ;
 TYPE_1__* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct page*) ;
 int FUNC_6 (char*,struct inode*,...) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page**) ;
 struct ceph_osd_data* FUNC_9 (struct ceph_osd_request*,int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct ceph_osd_request *VAR_4)
{
 struct inode *VAR_5 = VAR_4->r_inode;
 struct ceph_osd_data *VAR_6;
 int VAR_7 = VAR_4->r_result <= 0 ? VAR_4->r_result : 0;
 int VAR_8 = VAR_4->r_result >= 0 ? VAR_4->r_result : 0;
 int VAR_9;
 int VAR_10;

 FUNC_6("finish_read %p req %p rc %d bytes %d\n", VAR_5, VAR_4, VAR_7, VAR_8);
 if (VAR_7 == -VAR_1)
  FUNC_4(VAR_5)->blacklisted = 1;


 VAR_6 = FUNC_9(VAR_4, 0);
 FUNC_0(VAR_6->type != VAR_0);
 VAR_9 = FUNC_2((u64)VAR_6->alignment,
     (u64)VAR_6->length);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct page *VAR_11 = VAR_6->pages[VAR_10];

  if (VAR_7 < 0 && VAR_7 != -VAR_2) {
   FUNC_3(VAR_5, VAR_11);
   goto unlock;
  }
  if (VAR_8 < (int)VAR_3) {

   int VAR_12 = VAR_8 < 0 ? 0 : VAR_8;
   FUNC_12(VAR_11, VAR_12, VAR_3);
  }
   FUNC_6("finish_read %p uptodate %p idx %lu\n", VAR_5, VAR_11,
       VAR_11->index);
  FUNC_7(VAR_11);
  FUNC_1(VAR_11);
  FUNC_5(VAR_5, VAR_11);
unlock:
  FUNC_11(VAR_11);
  FUNC_10(VAR_11);
  VAR_8 -= VAR_3;
 }
 FUNC_8(VAR_6->pages);
}
