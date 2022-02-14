
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct iomap {scalar_t__ type; int flags; struct dax_device* dax_dev; struct block_device* bdev; } ;
struct inode {int i_mapping; } ;
struct dax_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef unsigned int ssize_t ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int loff_t ;


 size_t FUNC_0 (int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (size_t const) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_4 (struct block_device*,int const,size_t const,int *) ;
 int VAR_11 ;
 size_t FUNC_5 (struct dax_device*,int ,void*,unsigned int,struct iov_iter*) ;
 size_t FUNC_6 (struct dax_device*,int ,void*,unsigned int,struct iov_iter*) ;
 unsigned int FUNC_7 (struct dax_device*,int ,int ,void**,int *) ;
 int FUNC_8 (struct iomap*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,int,int) ;
 scalar_t__ FUNC_14 (struct iov_iter*) ;
 int FUNC_15 (int,struct iov_iter*) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static loff_t
FUNC_17(struct inode *VAR_12, loff_t VAR_13, loff_t VAR_14, void *VAR_15,
  struct iomap *VAR_16)
{
 struct block_device *VAR_17 = VAR_16->bdev;
 struct dax_device *VAR_18 = VAR_16->dax_dev;
 struct iov_iter *VAR_19 = VAR_15;
 loff_t VAR_20 = VAR_13 + VAR_14, VAR_21 = 0;
 ssize_t VAR_22 = 0;
 size_t VAR_23;
 int VAR_24;

 if (FUNC_14(VAR_19) == VAR_9) {
  VAR_20 = FUNC_16(VAR_20, FUNC_12(VAR_12));
  if (VAR_13 >= VAR_20)
   return 0;

  if (VAR_16->type == VAR_4 || VAR_16->type == VAR_6)
   return FUNC_15(FUNC_16(VAR_14, VAR_20 - VAR_13), VAR_19);
 }

 if (FUNC_3(VAR_16->type != VAR_5))
  return -VAR_2;






 if (VAR_16->flags & VAR_3) {
  FUNC_13(VAR_12->i_mapping,
           VAR_13 >> VAR_7,
           (VAR_20 - 1) >> VAR_7);
 }

 VAR_24 = FUNC_9();
 while (VAR_13 < VAR_20) {
  unsigned VAR_25 = VAR_13 & (VAR_8 - 1);
  const size_t VAR_26 = FUNC_0(VAR_14 + VAR_25, VAR_8);
  const sector_t VAR_27 = FUNC_8(VAR_16, VAR_13);
  ssize_t VAR_28;
  pgoff_t VAR_29;
  void *VAR_30;

  if (FUNC_11(VAR_11)) {
   VAR_22 = -VAR_1;
   break;
  }

  VAR_22 = FUNC_4(VAR_17, VAR_27, VAR_26, &VAR_29);
  if (VAR_22)
   break;

  VAR_28 = FUNC_7(VAR_18, VAR_29, FUNC_2(VAR_26),
    &VAR_30, ((void*)0));
  if (VAR_28 < 0) {
   VAR_22 = VAR_28;
   break;
  }

  VAR_28 = FUNC_1(VAR_28);
  VAR_30 += VAR_25;
  VAR_28 -= VAR_25;
  if (VAR_28 > VAR_20 - VAR_13)
   VAR_28 = VAR_20 - VAR_13;






  if (FUNC_14(VAR_19) == VAR_10)
   VAR_23 = FUNC_5(VAR_18, VAR_29, VAR_30,
     VAR_28, VAR_19);
  else
   VAR_23 = FUNC_6(VAR_18, VAR_29, VAR_30,
     VAR_28, VAR_19);

  VAR_13 += VAR_23;
  VAR_14 -= VAR_23;
  VAR_21 += VAR_23;

  if (VAR_23 == 0)
   VAR_22 = -VAR_0;
  if (VAR_23 < VAR_28)
   break;
 }
 FUNC_10(VAR_24);

 return VAR_21 ? VAR_21 : VAR_22;
}
