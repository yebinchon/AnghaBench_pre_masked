
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {int dummy; } ;
struct cb710_slot {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cb710_slot*,int ) ;
 int FUNC_1 (struct sg_mapping_iter*,scalar_t__,size_t) ;
 int FUNC_2 (struct cb710_slot*,int ) ;

__attribute__((used)) static int FUNC_3(struct cb710_slot *VAR_4,
 struct sg_mapping_iter *VAR_5, size_t VAR_6)
{
 if (!(FUNC_0(VAR_4, VAR_3) & VAR_2)) {
  int VAR_7 = FUNC_2(VAR_4,
   VAR_1);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_1(VAR_5,
  VAR_4->iobase + VAR_0, VAR_6);

 return 0;
}
