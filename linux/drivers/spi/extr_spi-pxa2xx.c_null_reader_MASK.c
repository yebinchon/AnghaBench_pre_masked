
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct driver_data {scalar_t__ n_bytes; scalar_t__ rx; scalar_t__ rx_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct driver_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct driver_data *VAR_3)
{
 u8 VAR_4 = VAR_3->n_bytes;

 while ((FUNC_0(VAR_3, VAR_1) & VAR_2)
        && (VAR_3->rx < VAR_3->rx_end)) {
  FUNC_0(VAR_3, VAR_0);
  VAR_3->rx += VAR_4;
 }

 return VAR_3->rx == VAR_3->rx_end;
}
