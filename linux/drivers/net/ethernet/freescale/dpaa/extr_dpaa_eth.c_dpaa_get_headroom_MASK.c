
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dpaa_buffer_layout {scalar_t__ priv_data_size; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline u16 FUNC_1(struct dpaa_buffer_layout *VAR_4)
{
 u16 VAR_5;
 VAR_5 = (u16)(VAR_4->priv_data_size + VAR_2 +
  VAR_3 + VAR_1);

 return VAR_0 ? FUNC_0(VAR_5,
           VAR_0) :
     VAR_5;
}
