
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_adapter {int * rss_lut; int * rss_key; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_0)
{
 FUNC_0(VAR_0->rss_key);
 VAR_0->rss_key = ((void*)0);

 FUNC_0(VAR_0->rss_lut);
 VAR_0->rss_lut = ((void*)0);
}
