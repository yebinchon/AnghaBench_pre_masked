
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct pfn_array {unsigned long* pa_iova_pfn; scalar_t__ pa_nr; } ;
struct channel_program {int mdev; } ;
struct ccwchain {struct pfn_array* ch_pa; struct ccw1* ch_ccw; } ;
struct ccw1 {int count; unsigned long cda; int flags; } ;
typedef int iova ;
typedef unsigned long __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (struct ccw1*) ;
 scalar_t__ FUNC_1 (struct ccw1*) ;
 int FUNC_2 (int ,unsigned long*,unsigned long,int) ;
 int FUNC_3 (void*,int) ;
 unsigned long* FUNC_4 (int,int,int) ;
 int FUNC_5 (unsigned long*) ;
 int FUNC_6 (struct pfn_array*,unsigned long,int) ;
 int FUNC_7 (struct pfn_array*,unsigned long*) ;
 int FUNC_8 (struct pfn_array*,int ) ;
 int FUNC_9 (struct pfn_array*,int ) ;
 scalar_t__ FUNC_10 (unsigned long*) ;

__attribute__((used)) static int FUNC_11(struct ccwchain *VAR_5,
     int VAR_6,
     struct channel_program *VAR_7)
{
 struct ccw1 *VAR_8;
 struct pfn_array *VAR_9;
 u64 VAR_10;
 unsigned long *VAR_11;
 int VAR_12;
 int VAR_13 = 1;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_8 = VAR_5->ch_ccw + VAR_6;

 if (VAR_8->count)
  VAR_13 = VAR_8->count;


 if (FUNC_1(VAR_8)) {


  VAR_12 = FUNC_2(VAR_7->mdev, &VAR_10, VAR_8->cda, sizeof(VAR_10));
  if (VAR_12)
   return VAR_12;
 } else {
  VAR_10 = VAR_8->cda;
 }
 VAR_14 = FUNC_3((void *)VAR_10, VAR_13);
 VAR_15 = VAR_14 * sizeof(*VAR_11);


 VAR_11 = FUNC_4(VAR_14, sizeof(*VAR_11), VAR_2 | VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_1;
  goto out_init;
 }







 VAR_9 = VAR_5->ch_pa + VAR_6;
 VAR_12 = FUNC_6(VAR_9, VAR_10, VAR_13);
 if (VAR_12 < 0)
  goto out_free_idaws;

 if (FUNC_1(VAR_8)) {

  VAR_12 = FUNC_2(VAR_7->mdev, VAR_11, VAR_8->cda, VAR_15);
  if (VAR_12)
   goto out_unpin;





  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_9->pa_iova_pfn[VAR_16] = VAR_11[VAR_16] >> VAR_4;
 } else {





 }

 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_8(VAR_9, VAR_7->mdev);
  if (VAR_12 < 0)
   goto out_unpin;
 } else {
  VAR_9->pa_nr = 0;
 }

 VAR_8->cda = (__u32) FUNC_10(VAR_11);
 VAR_8->flags |= VAR_0;


 FUNC_7(VAR_9, VAR_11);

 return 0;

out_unpin:
 FUNC_9(VAR_9, VAR_7->mdev);
out_free_idaws:
 FUNC_5(VAR_11);
out_init:
 VAR_8->cda = 0;
 return VAR_12;
}
