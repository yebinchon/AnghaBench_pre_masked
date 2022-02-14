
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp6000_pcie {int bar_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp6000_pcie*,int,int,int,int ,size_t,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct nfp6000_pcie *VAR_0,
    int VAR_1, int VAR_2, int VAR_3,
    u64 VAR_4, size_t VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_2(&VAR_0->bar_lock, VAR_7);

 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0)
  FUNC_3(&VAR_0->bar_lock, VAR_7);
 else
  FUNC_0(&VAR_0->bar_lock);

 return VAR_8;
}
