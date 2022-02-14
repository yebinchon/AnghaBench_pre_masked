
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp6000_pcie {int bar_lock; int * bar; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp6000_pcie*,int ,int ,int ,int ,size_t,int) ;
 int FUNC_2 (struct nfp6000_pcie*,int ,int ,int ,int ,size_t,int) ;
 int FUNC_3 (struct nfp6000_pcie*,int *) ;
 int FUNC_4 (struct nfp6000_pcie*,int *) ;
 int FUNC_5 (struct nfp6000_pcie*,int*,int ,int ,int ,int ,size_t,int) ;
 int FUNC_6 (struct nfp6000_pcie*,int *,int ,int ,int ,int ,size_t,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct nfp6000_pcie *VAR_1,
       u32 VAR_2, u32 VAR_3, u32 VAR_4,
       u64 VAR_5, size_t VAR_6, int VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6 > (1 << 24))
  return -VAR_0;

 FUNC_7(&VAR_1->bar_lock, VAR_9);
 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10 >= 0) {

  FUNC_3(VAR_1, &VAR_1->bar[VAR_10]);
  FUNC_8(&VAR_1->bar_lock, VAR_9);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7);
 if (VAR_10 < 0) {
  if (VAR_8)
   goto err_nobar;





  FUNC_8(&VAR_1->bar_lock, VAR_9);
  VAR_11 = FUNC_5(VAR_1, &VAR_10, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7);
  if (VAR_11)
   return VAR_11;
  FUNC_0(&VAR_1->bar_lock);
 }

 FUNC_3(VAR_1, &VAR_1->bar[VAR_10]);
 VAR_11 = FUNC_6(VAR_1, &VAR_1->bar[VAR_10],
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_11 < 0) {
  FUNC_4(VAR_1, &VAR_1->bar[VAR_10]);
  VAR_10 = VAR_11;
 }

err_nobar:
 FUNC_8(&VAR_1->bar_lock, VAR_9);
 return VAR_10;
}
