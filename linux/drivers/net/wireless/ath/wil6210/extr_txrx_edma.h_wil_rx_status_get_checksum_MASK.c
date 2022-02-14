
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_net_stats {int rx_csum_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_2,
          struct wil_net_stats *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_1(VAR_2);

 if (VAR_5 == 1)
  return VAR_1;

 if (VAR_5 == 0 && VAR_4 == 1)
  return VAR_1;

 if (VAR_4 == 0 && VAR_5 == 0)

  return VAR_0;






 VAR_3->rx_csum_err++;
 return VAR_0;
}
