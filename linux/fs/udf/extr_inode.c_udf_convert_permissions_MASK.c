
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int uint32_t ;
struct TYPE_2__ {int flags; } ;
struct fileEntry {TYPE_1__ icbTag; int permissions; } ;
typedef int permissions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static umode_t FUNC_2(struct fileEntry *VAR_6)
{
 umode_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_8 = FUNC_1(VAR_6->permissions);
 VAR_9 = FUNC_0(VAR_6->icbTag.flags);

 VAR_7 = ((VAR_8) & 0007) |
  ((VAR_8 >> 2) & 0070) |
  ((VAR_8 >> 4) & 0700) |
  ((VAR_9 & VAR_1) ? VAR_4 : 0) |
  ((VAR_9 & VAR_0) ? VAR_3 : 0) |
  ((VAR_9 & VAR_2) ? VAR_5 : 0);

 return VAR_7;
}
