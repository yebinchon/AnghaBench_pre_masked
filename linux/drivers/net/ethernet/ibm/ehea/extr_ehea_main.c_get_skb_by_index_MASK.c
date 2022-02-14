
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {void* data; } ;
struct ehea_cqe {int wr_id; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_3(struct sk_buff **VAR_2,
            int VAR_3,
            struct ehea_cqe *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_1, VAR_4->wr_id);
 struct sk_buff *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_8 = VAR_5 + 1;
 VAR_8 &= (VAR_3 - 1);

 VAR_7 = VAR_2[VAR_8];
 if (VAR_7) {
  FUNC_2(VAR_7);
  FUNC_2(VAR_7 + VAR_0);

  VAR_7 = (VAR_2[VAR_8]->data);
  FUNC_1(VAR_7);
  FUNC_1(VAR_7 + VAR_0);
  FUNC_1(VAR_7 + VAR_0 * 2);
  FUNC_1(VAR_7 + VAR_0 * 3);
 }

 VAR_6 = VAR_2[VAR_5];
 VAR_2[VAR_5] = ((void*)0);
 return VAR_6;
}
