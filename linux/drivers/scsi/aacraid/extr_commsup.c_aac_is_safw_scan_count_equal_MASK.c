
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {scalar_t__ scan_counter; TYPE_1__** hba_map; } ;
struct TYPE_2__ {scalar_t__ scan_counter; } ;



__attribute__((used)) static inline int FUNC_0(struct aac_dev *VAR_0,
 int VAR_1, int VAR_2)
{
 return VAR_0->hba_map[VAR_1][VAR_2].scan_counter == VAR_0->scan_counter;
}
