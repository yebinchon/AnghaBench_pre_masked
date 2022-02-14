
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_mdiomux_desc {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(int VAR_4, int VAR_5,
        void *VAR_6)
{
 struct iproc_mdiomux_desc *VAR_7 = VAR_6;
 u32 VAR_8, VAR_9;
 bool VAR_10;


 VAR_10 = (VAR_5 < VAR_0);
 VAR_9 = VAR_10 ? VAR_5 : (VAR_5 - VAR_0);

 VAR_8 = (VAR_10 ? 1 : 0) << VAR_2;
 VAR_8 |= (VAR_9 << VAR_1);

 FUNC_0(VAR_8, VAR_7->base + VAR_3);
 return 0;
}
