
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mtd_info {scalar_t__ size; scalar_t__ erasesize; struct docg3* priv; } ;
struct erase_info {scalar_t__ addr; scalar_t__ len; } ;
struct docg3 {TYPE_1__* cascade; int device_id; int reliable; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int*,int*,int*,int*,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct docg3*,int,int) ;
 int FUNC_3 (struct docg3*,int ) ;
 int FUNC_4 (struct docg3*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_1, struct erase_info *VAR_2)
{
 struct docg3 *VAR_3 = VAR_1->priv;
 uint64_t VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;

 FUNC_1("doc_erase(from=%lld, len=%lld\n", VAR_2->addr, VAR_2->len);

 FUNC_0(VAR_2->addr + VAR_2->len, &VAR_5, &VAR_6, &VAR_7,
     &VAR_9, VAR_3->reliable);
 if (VAR_2->addr + VAR_2->len > VAR_1->size || VAR_7 || VAR_9)
  return -VAR_0;

 FUNC_0(VAR_2->addr, &VAR_5, &VAR_6, &VAR_7, &VAR_9,
     VAR_3->reliable);
 FUNC_5(&VAR_3->cascade->lock);
 FUNC_3(VAR_3, VAR_3->device_id);
 FUNC_4(VAR_3);
 for (VAR_4 = VAR_2->len; !VAR_8 && VAR_4 > 0; VAR_4 -= VAR_1->erasesize) {
  VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_6);
  VAR_5 += 2;
  VAR_6 += 2;
 }
 FUNC_6(&VAR_3->cascade->lock);

 return VAR_8;
}
