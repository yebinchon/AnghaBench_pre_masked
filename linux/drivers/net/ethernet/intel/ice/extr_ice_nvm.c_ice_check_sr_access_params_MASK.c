
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ sr_words; } ;
struct ice_hw {TYPE_1__ nvm; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ice_hw*,int ,char*,...) ;

__attribute__((used)) static enum ice_status
FUNC_1(struct ice_hw *VAR_3, u32 VAR_4, u16 VAR_5)
{
 if ((VAR_4 + VAR_5) > VAR_3->nvm.sr_words) {
  FUNC_0(VAR_3, VAR_0,
     "NVM error: offset beyond SR lmt.\n");
  return VAR_1;
 }

 if (VAR_5 > VAR_2) {

  FUNC_0(VAR_3, VAR_0,
     "NVM error: tried to access %d words, limit is %d.\n",
     VAR_5, VAR_2);
  return VAR_1;
 }

 if (((VAR_4 + (VAR_5 - 1)) / VAR_2) !=
     (VAR_4 / VAR_2)) {

  FUNC_0(VAR_3, VAR_0,
     "NVM error: cannot spread over two sectors.\n");
  return VAR_1;
 }

 return 0;
}
