
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ range_action ;
struct TYPE_9__ {unsigned int ssid; unsigned int devno; } ;
struct TYPE_10__ {TYPE_3__ dev_id; } ;
struct TYPE_7__ {unsigned int ssid; unsigned int devno; } ;
struct TYPE_8__ {TYPE_1__ dev_id; } ;
struct TYPE_11__ {TYPE_4__ fcp; TYPE_2__ ccw; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_5__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__,unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_6__ VAR_10 ;
 int FUNC_1 (char*,unsigned int*,unsigned int*,unsigned int*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_11, range_action VAR_12,
          int VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;
 char *VAR_22;
 range_action VAR_23;

 VAR_21 = 0;

 while ((VAR_22 = FUNC_3(&VAR_11, ","))) {
  VAR_20 = 0;
  VAR_23 = VAR_12;
  if (*VAR_22 == '!') {
   if (VAR_23 == VAR_7)
    VAR_23 = VAR_9;
   else
    VAR_23 = VAR_7;
   VAR_22++;
  }
  if (FUNC_2(VAR_22, "all") == 0) {
   VAR_14 = 0;
   VAR_16 = 0;
   VAR_18 = 0;
   VAR_15 = VAR_4;
   VAR_17 = VAR_5;
   VAR_19 = VAR_6;
  } else if (FUNC_2(VAR_22, "ipldev") == 0) {
   if (VAR_10.type == VAR_1) {
    VAR_14 = 0;
    VAR_16 = VAR_10.data.ccw.dev_id.ssid;
    VAR_18 = VAR_10.data.ccw.dev_id.devno;
   } else if (VAR_10.type == VAR_2 ||
       VAR_10.type == VAR_3) {
    VAR_14 = 0;
    VAR_16 = VAR_10.data.fcp.dev_id.ssid;
    VAR_18 = VAR_10.data.fcp.dev_id.devno;
   } else {
    continue;
   }
   VAR_15 = VAR_14;
   VAR_17 = VAR_16;
   VAR_19 = VAR_18;
  } else if (FUNC_2(VAR_22, "condev") == 0) {
   if (VAR_8 == -1)
    continue;

   VAR_14 = VAR_15 = 0;
   VAR_16 = VAR_17 = 0;
   VAR_18 = VAR_19 = VAR_8;
  } else {
   VAR_20 = FUNC_1(FUNC_3(&VAR_22, "-"), &VAR_14,
      &VAR_16, &VAR_18, VAR_13);
   if (!VAR_20) {
    if (VAR_22 != ((void*)0))
     VAR_20 = FUNC_1(VAR_22, &VAR_15,
        &VAR_17, &VAR_19,
        VAR_13);
    else {
     VAR_15 = VAR_14;
     VAR_17 = VAR_16;
     VAR_19 = VAR_18;
    }
   }
  }
  if (!VAR_20) {
   VAR_20 = FUNC_0(VAR_23, VAR_16, VAR_17, VAR_18, VAR_19,
          VAR_13);
   if (VAR_20)
    VAR_21 = -VAR_0;
  } else
   VAR_21 = -VAR_0;
 }

 return VAR_21;
}
