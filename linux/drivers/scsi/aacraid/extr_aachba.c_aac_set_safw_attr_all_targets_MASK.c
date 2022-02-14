
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct aac_dev {scalar_t__ scan_counter; TYPE_1__** hba_map; } ;
struct TYPE_2__ {scalar_t__ scan_counter; int devtype; scalar_t__ rmw_nexus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct aac_dev*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct aac_dev*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct aac_dev*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct aac_dev*) ;
 scalar_t__ FUNC_4 (struct aac_dev*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct aac_dev*,scalar_t__) ;
 int FUNC_6 (struct aac_dev*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct aac_dev *VAR_5)
{

 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u8 VAR_11, VAR_12;

 VAR_6 = FUNC_3(VAR_5);

 VAR_5->scan_counter++;

 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {

  VAR_9 = FUNC_1(VAR_5, VAR_8);
  VAR_10 = FUNC_5(VAR_5, VAR_8);
  VAR_11 = FUNC_2(VAR_5, VAR_8);
  VAR_12 = FUNC_0(VAR_5, VAR_8);
  VAR_7 = FUNC_4(VAR_5, VAR_8);

  if (VAR_9 >= VAR_3 || VAR_10 >= VAR_4)
   continue;

  if (VAR_11 != 0) {
   VAR_5->hba_map[VAR_9][VAR_10].devtype =
    VAR_2;
   continue;
  }

  if (VAR_7 != 0 && (VAR_12 & 8)) {
   VAR_5->hba_map[VAR_9][VAR_10].devtype =
    VAR_1;
   VAR_5->hba_map[VAR_9][VAR_10].rmw_nexus =
     VAR_7;
  } else
   VAR_5->hba_map[VAR_9][VAR_10].devtype =
    VAR_0;

  VAR_5->hba_map[VAR_9][VAR_10].scan_counter = VAR_5->scan_counter;

  FUNC_6(VAR_5, VAR_9, VAR_10);
 }
}
