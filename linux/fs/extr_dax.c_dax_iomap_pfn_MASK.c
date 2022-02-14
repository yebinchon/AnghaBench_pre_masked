
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {int dax_dev; int bdev; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int pfn_t ;
typedef int loff_t ;


 int VAR_0 ;
 size_t FUNC_0 (long) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int const,size_t,int *) ;
 long FUNC_3 (int ,int ,int,int *,int *) ;
 int FUNC_4 (struct iomap*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct iomap *VAR_1, loff_t VAR_2, size_t VAR_3,
    pfn_t *VAR_4)
{
 const sector_t VAR_5 = FUNC_4(VAR_1, VAR_2);
 pgoff_t VAR_6;
 int VAR_7, VAR_8;
 long VAR_9;

 VAR_8 = FUNC_2(VAR_1->bdev, VAR_5, VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_7 = FUNC_5();
 VAR_9 = FUNC_3(VAR_1->dax_dev, VAR_6, FUNC_1(VAR_3),
       ((void*)0), VAR_4);
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto out;
 }
 VAR_8 = -VAR_0;
 if (FUNC_0(VAR_9) < VAR_3)
  goto out;
 if (FUNC_8(*VAR_4) & (FUNC_1(VAR_3)-1))
  goto out;

 if (VAR_9 > 1 && !FUNC_7(*VAR_4))
  goto out;
 VAR_8 = 0;
out:
 FUNC_6(VAR_7);
 return VAR_8;
}
