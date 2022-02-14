
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port {int dummy; } ;
struct desc {int next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct desc*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct port*,int ) ;
 struct desc* FUNC_4 (struct port*,int ) ;
 int FUNC_5 (struct port*,int ) ;
 struct desc* FUNC_6 (struct port*,int ) ;

__attribute__((used)) static inline int FUNC_7(unsigned int VAR_2, struct port *VAR_3,
     int VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct desc *VAR_8;

 if (!(VAR_5 = FUNC_2(VAR_2)))
  return -1;

 FUNC_0(VAR_5 & 0x1F);
 VAR_6 = VAR_4 ? FUNC_5(VAR_3, 0) : FUNC_3(VAR_3, 0);
 VAR_8 = VAR_4 ? FUNC_6(VAR_3, 0) : FUNC_4(VAR_3, 0);
 VAR_7 = (VAR_5 - VAR_6) / sizeof(struct desc);
 FUNC_0(VAR_7 >= (VAR_4 ? VAR_1 : VAR_0));
 FUNC_1(VAR_5, &VAR_8[VAR_7]);
 FUNC_0(VAR_8[VAR_7].next);
 return VAR_7;
}
