
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sfp {int (* write ) (struct sfp*,int,int ,void*,size_t) ;} ;


 int FUNC_0 (struct sfp*,int,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(struct sfp *VAR_0, bool VAR_1, u8 VAR_2, void *VAR_3, size_t VAR_4)
{
 return VAR_0->write(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
